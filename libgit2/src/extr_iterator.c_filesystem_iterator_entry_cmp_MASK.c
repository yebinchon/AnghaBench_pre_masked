
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
typedef TYPE_1__ filesystem_iterator_entry ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const filesystem_iterator_entry *VAR_2 = (const filesystem_iterator_entry *)VAR_0;
 const filesystem_iterator_entry *VAR_3 = (const filesystem_iterator_entry *)VAR_1;

 return FUNC_0(VAR_2->path, VAR_3->path);
}
