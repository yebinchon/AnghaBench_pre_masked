
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {struct dir_struct* dir; } ;
struct option {scalar_t__ value; } ;
struct dir_struct {char const* exclude_per_dir; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct dir_struct* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1, const char *VAR_2,
        int VAR_3)
{
 struct dir_struct *VAR_4;
 struct unpack_trees_options *VAR_5;

 FUNC_0(VAR_3);

 VAR_5 = (struct unpack_trees_options *)VAR_1->value;

 if (VAR_5->dir)
  FUNC_1("more than one --exclude-per-directory given.");

 VAR_4 = FUNC_2(1, sizeof(*VAR_5->dir));
 VAR_4->flags |= VAR_0;
 VAR_4->exclude_per_dir = VAR_2;
 VAR_5->dir = VAR_4;




 return 0;
}
