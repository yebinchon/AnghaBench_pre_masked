
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ peer; scalar_t__ (* recv ) (scalar_t__,struct sk_buff*) ;} ;
struct dsp {TYPE_1__ ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ,int ,int,int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (scalar_t__,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_3(struct dsp *VAR_4, u8 *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;


 VAR_7 = FUNC_0(VAR_3,
    (VAR_6) ? VAR_2 : VAR_1, VAR_6, VAR_5,
    VAR_0);
 if (VAR_7) {
  if (VAR_4->ch.peer) {
   if (VAR_4->ch.recv(VAR_4->ch.peer, VAR_7))
    FUNC_1(VAR_7);
  } else
   FUNC_1(VAR_7);
 }
}
