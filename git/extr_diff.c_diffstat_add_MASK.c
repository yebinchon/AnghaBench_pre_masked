
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diffstat_t {scalar_t__ nr; struct diffstat_file** files; int alloc; } ;
struct diffstat_file {int is_renamed; void* name; int * from_name; } ;


 int FUNC_0 (struct diffstat_file**,scalar_t__,int ) ;
 struct diffstat_file* FUNC_1 (int,int) ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static struct diffstat_file *FUNC_3(struct diffstat_t *VAR_0,
       const char *VAR_1,
       const char *VAR_2)
{
 struct diffstat_file *VAR_3;
 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 FUNC_0(VAR_0->files, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->files[VAR_0->nr++] = VAR_3;
 if (VAR_2) {
  VAR_3->from_name = FUNC_2(VAR_1);
  VAR_3->name = FUNC_2(VAR_2);
  VAR_3->is_renamed = 1;
 }
 else {
  VAR_3->from_name = ((void*)0);
  VAR_3->name = FUNC_2(VAR_1);
 }
 return VAR_3;
}
