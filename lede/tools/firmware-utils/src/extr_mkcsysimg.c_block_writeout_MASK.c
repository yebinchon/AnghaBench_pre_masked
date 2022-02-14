
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csys_block {int size_csum; struct csum_state* css; int size_avail; int file_size; int file_name; } ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (int *,struct csys_block*) ;
 int FUNC_2 (int *,struct csys_block*) ;
 int FUNC_3 (int *,struct csys_block*) ;
 int FUNC_4 (struct csum_state*,int ) ;

int
FUNC_5(FILE *VAR_0, struct csys_block *VAR_1)
{
 int VAR_2;
 struct csum_state VAR_3;

 VAR_2 = 0;

 if (VAR_1 == ((void*)0))
  return VAR_2;

 VAR_1->css = ((void*)0);

 FUNC_0(2, "writing block, file=%s, file_size=%d, space=%d",
  VAR_1->file_name, VAR_1->file_size, VAR_1->size_avail);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->size_csum != 0) {
  VAR_1->css = &VAR_3;
  FUNC_4(&VAR_3, VAR_1->size_csum);
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return VAR_2;
}
