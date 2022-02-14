
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct h5 {int rx_pending; int rx_skb; int flags; } ;


 int FUNC_0 (char*,unsigned char const,int ) ;
 int FUNC_1 (char*,unsigned char) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;


 int FUNC_2 (struct h5*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,unsigned char const*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct h5 *VAR_3, unsigned char VAR_4)
{
 const u8 VAR_5 = VAR_1, VAR_6 = VAR_2;
 const u8 *VAR_7 = &VAR_4;

 if (!FUNC_6(VAR_0, &VAR_3->flags) && VAR_4 == VAR_2) {
  FUNC_3(VAR_0, &VAR_3->flags);
  return;
 }

 if (FUNC_5(VAR_0, &VAR_3->flags)) {
  switch (VAR_4) {
  case 129:
   VAR_7 = &VAR_5;
   break;
  case 128:
   VAR_7 = &VAR_6;
   break;
  default:
   FUNC_1("Invalid esc byte 0x%02hhx", VAR_4);
   FUNC_2(VAR_3);
   return;
  }
 }

 FUNC_4(VAR_3->rx_skb, VAR_7, 1);
 VAR_3->rx_pending--;

 FUNC_0("unslipped 0x%02hhx, rx_pending %zu", *VAR_7, VAR_3->rx_pending);
}
