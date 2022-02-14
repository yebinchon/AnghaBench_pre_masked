
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct gendisk {int dummy; } ;


 struct hd_struct* FUNC_0 (struct gendisk*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct hd_struct *FUNC_5(struct gendisk *VAR_0, int VAR_1)
{
 struct hd_struct *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(FUNC_2(VAR_2));
 FUNC_4();

 return VAR_2;
}
