
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_10,
  int VAR_11, int VAR_12)
{
 int VAR_13 = VAR_9 *
   VAR_7;
 int VAR_14 = VAR_8 *
   VAR_7;

 if (VAR_13 < VAR_11)
  VAR_13 = VAR_11;
 if (VAR_14 > VAR_12)
  VAR_14 = VAR_12;

 if (VAR_13 > VAR_14)
  return -VAR_6;

 FUNC_0(VAR_10->device, VAR_0,
   VAR_2, VAR_4,
   (VAR_14 / VAR_7));
 FUNC_0(VAR_10->device, VAR_0,
   VAR_2, VAR_5,
   (VAR_13 / VAR_7));
 FUNC_0(VAR_10->device, VAR_0,
   VAR_1, VAR_3,
   (VAR_14 / VAR_7));

 return 0;
}
