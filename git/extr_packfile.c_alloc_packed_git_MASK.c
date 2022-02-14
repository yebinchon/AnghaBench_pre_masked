
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_fd; } ;


 int FUNC_0 (struct packed_git*,int ,int) ;
 int FUNC_1 (int,int) ;
 struct packed_git* FUNC_2 (int ) ;

__attribute__((used)) static struct packed_git *FUNC_3(int VAR_0)
{
 struct packed_git *VAR_1 = FUNC_2(FUNC_1(sizeof(*VAR_1), VAR_0));
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->pack_fd = -1;
 return VAR_1;
}
