
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct merge_list {unsigned int stage; char const* path; unsigned int mode; int blob; } ;


 int FUNC_0 (int ,struct object_id const*) ;
 int VAR_0 ;
 struct merge_list* FUNC_1 (int,int) ;

__attribute__((used)) static struct merge_list *FUNC_2(unsigned VAR_1, unsigned VAR_2, const struct object_id *VAR_3, const char *VAR_4)
{
 struct merge_list *VAR_5 = FUNC_1(1, sizeof(*VAR_5));

 VAR_5->stage = VAR_1;
 VAR_5->path = VAR_4;
 VAR_5->mode = VAR_2;
 VAR_5->blob = FUNC_0(VAR_0, VAR_3);
 return VAR_5;
}
