
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {int flags; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct omap_sham_reqctx *VAR_4)
{
 int VAR_5;

 switch (VAR_4->flags & VAR_0) {
 case 133:
 case 132:
  VAR_5 = VAR_1;
  break;
 case 131:
 case 130:
  VAR_5 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_5 = VAR_3;
  break;
 default:
  VAR_5 = 0;
 }

 return VAR_5;
}
