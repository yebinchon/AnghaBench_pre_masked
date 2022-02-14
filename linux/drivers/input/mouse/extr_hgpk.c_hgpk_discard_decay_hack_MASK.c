
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int xlast; int xbigj; int xsaw_secondary; int ylast; int ybigj; int ysaw_secondary; int recalib_wq; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct psmouse*,int *,int ) ;
 int FUNC_4 (struct psmouse*,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_2, int VAR_3, int VAR_4)
{
 struct hgpk_data *VAR_5 = VAR_2->private;
 int VAR_6, VAR_7;
 bool VAR_8 = 0;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_0(VAR_4);


 if (VAR_6 > VAR_1 ||
  (VAR_6 > VAR_1 / 2 && ((VAR_6 / 4) > VAR_5->xlast))) {
  FUNC_4(VAR_2, "detected %dpx jump in x\n", VAR_3);
  VAR_5->xbigj = VAR_6;
 } else if (FUNC_1(VAR_6, VAR_5->xbigj)) {
  FUNC_4(VAR_2, "detected secondary %dpx jump in x\n", VAR_3);
  VAR_5->xbigj = VAR_6;
  VAR_5->xsaw_secondary++;
 } else {
  if (VAR_5->xbigj && VAR_5->xsaw_secondary > 1)
   VAR_8 = 1;
  VAR_5->xbigj = 0;
  VAR_5->xsaw_secondary = 0;
 }

 if (VAR_7 > VAR_1 ||
  (VAR_7 > VAR_1 / 2 && ((VAR_7 / 4) > VAR_5->ylast))) {
  FUNC_4(VAR_2, "detected %dpx jump in y\n", VAR_4);
  VAR_5->ybigj = VAR_7;
 } else if (FUNC_1(VAR_7, VAR_5->ybigj)) {
  FUNC_4(VAR_2, "detected secondary %dpx jump in y\n", VAR_4);
  VAR_5->ybigj = VAR_7;
  VAR_5->ysaw_secondary++;
 } else {
  if (VAR_5->ybigj && VAR_5->ysaw_secondary > 1)
   VAR_8 = 1;
  VAR_5->ybigj = 0;
  VAR_5->ysaw_secondary = 0;
 }

 VAR_5->xlast = VAR_6;
 VAR_5->ylast = VAR_7;

 if (VAR_8 && VAR_0) {
  FUNC_4(VAR_2, "scheduling recalibration\n");
  FUNC_3(VAR_2, &VAR_5->recalib_wq,
    FUNC_2(VAR_0));
 }

 return VAR_5->xbigj || VAR_5->ybigj;
}
