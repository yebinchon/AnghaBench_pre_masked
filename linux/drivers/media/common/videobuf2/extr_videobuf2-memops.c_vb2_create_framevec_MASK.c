
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_vector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct frame_vector* FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 struct frame_vector* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct frame_vector*) ;
 int FUNC_3 (unsigned long,unsigned long,unsigned int,struct frame_vector*) ;
 int FUNC_4 (struct frame_vector*) ;

struct frame_vector *FUNC_5(unsigned long VAR_6,
      unsigned long VAR_7)
{
 int VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;
 struct frame_vector *VAR_12;
 unsigned int VAR_13 = VAR_2 | VAR_3;

 VAR_9 = VAR_6 >> VAR_5;
 VAR_10 = (VAR_6 + VAR_7 - 1) >> VAR_5;
 VAR_11 = VAR_10 - VAR_9 + 1;
 VAR_12 = FUNC_1(VAR_11);
 if (!VAR_12)
  return FUNC_0(-VAR_1);
 VAR_8 = FUNC_3(VAR_6 & VAR_4, VAR_11, VAR_13, VAR_12);
 if (VAR_8 < 0)
  goto out_destroy;

 if (VAR_8 != VAR_11) {
  VAR_8 = -VAR_0;
  goto out_release;
 }
 return VAR_12;
out_release:
 FUNC_4(VAR_12);
out_destroy:
 FUNC_2(VAR_12);
 return FUNC_0(VAR_8);
}
