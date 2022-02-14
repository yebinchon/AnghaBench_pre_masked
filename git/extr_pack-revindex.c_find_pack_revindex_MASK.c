
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revindex_entry {int dummy; } ;
struct packed_git {struct revindex_entry* revindex; } ;
typedef int off_t ;


 int FUNC_0 (struct packed_git*,int ) ;
 scalar_t__ FUNC_1 (struct packed_git*) ;

struct revindex_entry *FUNC_2(struct packed_git *VAR_0, off_t VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0))
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 < 0)
  return ((void*)0);

 return VAR_0->revindex + VAR_2;
}
