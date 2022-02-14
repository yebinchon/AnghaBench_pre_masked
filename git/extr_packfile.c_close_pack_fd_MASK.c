
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_fd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(struct packed_git *VAR_1)
{
 if (VAR_1->pack_fd < 0)
  return 0;

 FUNC_0(VAR_1->pack_fd);
 VAR_0--;
 VAR_1->pack_fd = -1;

 return 1;
}
