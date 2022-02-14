
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct bzfifo {TYPE_1__* za; } ;
struct bchannel {int dropcnt; int rx_skb; int nr; int Flags; } ;
typedef int __le16 ;
struct TYPE_2__ {int z1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct bchannel*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct bchannel*,int,int) ;
 int * FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct bchannel *VAR_4, struct bzfifo *VAR_5,
   struct bzfifo *VAR_6, u_char *VAR_7)
{
 __le16 *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 u_char *VAR_16, *VAR_17;

 VAR_8 = &VAR_5->za[VAR_3].z1;
 VAR_9 = VAR_8 + 1;
 VAR_10 = &VAR_6->za[VAR_3].z1;
 VAR_11 = VAR_10 + 1;

 VAR_13 = FUNC_2(*VAR_8) - FUNC_2(*VAR_9);
 if (!VAR_13)
  return;

 if (VAR_13 <= 0)
  VAR_13 += VAR_0;
 VAR_12 = FUNC_2(*VAR_9) + VAR_13;
 if (VAR_12 >= (VAR_0 + VAR_1))
  VAR_12 -= VAR_0;

 VAR_14 = FUNC_2(*VAR_11) - FUNC_2(*VAR_10);
 if (VAR_14 <= 0)
  VAR_14 += VAR_0;

 VAR_14 = VAR_0 - VAR_14;


 if (FUNC_7(VAR_2, &VAR_4->Flags)) {
  VAR_4->dropcnt += VAR_13;
  *VAR_9 = FUNC_1(VAR_12);
  return;
 }
 VAR_15 = FUNC_0(VAR_4, VAR_13);
 if (VAR_15 < 0) {
  FUNC_4("B%d: No bufferspace for %d bytes\n",
      VAR_4->nr, VAR_13);
 } else {
  VAR_16 = FUNC_6(VAR_4->rx_skb, VAR_13);
  if (FUNC_2(*VAR_9) + VAR_13 <= VAR_0 + VAR_1)
   VAR_15 = VAR_13;
  else
   VAR_15 = VAR_0 + VAR_1 - FUNC_2(*VAR_9);


  VAR_17 = VAR_7 + (FUNC_2(*VAR_9) - VAR_1);

  FUNC_3(VAR_16, VAR_17, VAR_15);
  VAR_13 -= VAR_15;

  if (VAR_13) {
   VAR_16 += VAR_15;
   VAR_17 = VAR_7;
   FUNC_3(VAR_16, VAR_17, VAR_13);
  }
  FUNC_5(VAR_4, VAR_14, 0);
 }
 *VAR_9 = FUNC_1(VAR_12);
}
