
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_entry {int mode; int path; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct name_entry const*) ;

__attribute__((used)) static int FUNC_2(const struct name_entry *VAR_0,
         const struct name_entry *VAR_1)
{
 return FUNC_0(VAR_0->path, FUNC_1(VAR_0), VAR_0->mode,
     VAR_1->path, FUNC_1(VAR_1), VAR_1->mode);
}
