
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_sham_reqctx {int flags; TYPE_1__* dd; scalar_t__ digest; } ;
struct ahash_request {scalar_t__ result; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct omap_sham_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ahash_request *VAR_8)
{
 struct omap_sham_reqctx *VAR_9 = FUNC_0(VAR_8);
 u32 *VAR_10 = (u32 *)VAR_9->digest;
 u32 *VAR_11 = (u32 *)VAR_8->result;
 int VAR_12, VAR_13, VAR_14 = 0;

 if (!VAR_11)
  return;

 switch (VAR_9->flags & VAR_1) {
 case 133:
  VAR_13 = VAR_2 / sizeof(u32);
  break;
 case 132:

  if (FUNC_3(VAR_0, &VAR_9->dd->flags))
   VAR_14 = 1;
  VAR_13 = VAR_3 / sizeof(u32);
  break;
 case 131:
  VAR_13 = VAR_4 / sizeof(u32);
  break;
 case 130:
  VAR_13 = VAR_5 / sizeof(u32);
  break;
 case 129:
  VAR_13 = VAR_6 / sizeof(u32);
  break;
 case 128:
  VAR_13 = VAR_7 / sizeof(u32);
  break;
 default:
  VAR_13 = 0;
 }

 if (VAR_14)
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_11[VAR_12] = FUNC_1(VAR_10[VAR_12]);
 else
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_11[VAR_12] = FUNC_2(VAR_10[VAR_12]);
}
