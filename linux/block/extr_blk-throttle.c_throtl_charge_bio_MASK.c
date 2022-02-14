
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {unsigned int* bytes_disp; unsigned int* last_bytes_disp; int * last_io_disp; int * io_disp; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*,int ) ;
 unsigned int FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct throtl_grp *VAR_1, struct bio *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_3(VAR_2);


 VAR_1->bytes_disp[VAR_3] += VAR_4;
 VAR_1->io_disp[VAR_3]++;
 VAR_1->last_bytes_disp[VAR_3] += VAR_4;
 VAR_1->last_io_disp[VAR_3]++;







 if (!FUNC_1(VAR_2, VAR_0))
  FUNC_2(VAR_2, VAR_0);
}
