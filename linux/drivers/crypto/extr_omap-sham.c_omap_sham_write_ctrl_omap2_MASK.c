
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_sham_reqctx {int flags; int digcnt; } ;
struct omap_sham_dev {int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct omap_sham_dev*) ;
 int FUNC_1 (struct omap_sham_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct omap_sham_reqctx* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct omap_sham_dev*,int ,int ) ;
 int FUNC_5 (struct omap_sham_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct omap_sham_dev *VAR_9, size_t VAR_10,
     int VAR_11, int VAR_12)
{
 struct omap_sham_reqctx *VAR_13 = FUNC_2(VAR_9->req);
 u32 VAR_14 = VAR_10 << 5, VAR_15;

 if (FUNC_3(VAR_13->digcnt))
  FUNC_4(VAR_9, FUNC_0(VAR_9), VAR_13->digcnt);

 FUNC_5(VAR_9, FUNC_1(VAR_9),
  VAR_8 | (VAR_12 ? VAR_7 : 0),
  VAR_8 | VAR_7);




 if ((VAR_13->flags & VAR_0) == VAR_1)
  VAR_14 |= VAR_3;
 if (!VAR_13->digcnt)
  VAR_14 |= VAR_4;
 if (VAR_11)
  VAR_14 |= VAR_5;

 VAR_15 = VAR_4 | VAR_5 |
   VAR_3 | VAR_6;

 FUNC_5(VAR_9, VAR_2, VAR_14, VAR_15);
}
