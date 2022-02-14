
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vhd_footer {int dummy; } ;
typedef int footer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,struct vhd_footer*,int) ;
 int FUNC_3 (struct vhd_footer*,int,int ,unsigned long long) ;

__attribute__((used)) static int
FUNC_4(int VAR_3)
{
 struct vhd_footer VAR_4;
 uint64_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return (VAR_6);

 VAR_5 = FUNC_1() * VAR_2;
 FUNC_3(&VAR_4, VAR_5, VAR_0, ~0ULL);
 VAR_6 = (FUNC_2(VAR_3, &VAR_4, sizeof(VAR_4)) < 0) ? VAR_1 : 0;
 return (VAR_6);
}
