
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyttsp {scalar_t__ act_intrvl; scalar_t__ tch_tmout; scalar_t__ lp_intrvl; } ;
typedef int intrvl_ray ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cyttsp*,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct cyttsp *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->act_intrvl != VAR_0 ||
     VAR_5->tch_tmout != VAR_4 ||
     VAR_5->lp_intrvl != VAR_2) {

  u8 VAR_7[] = {
   VAR_5->act_intrvl,
   VAR_5->tch_tmout,
   VAR_5->lp_intrvl
  };


  VAR_6 = FUNC_1(VAR_5, VAR_3,
     sizeof(VAR_7), VAR_7);
  FUNC_0(VAR_1);
 }

 return VAR_6;
}
