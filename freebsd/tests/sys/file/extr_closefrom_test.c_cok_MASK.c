
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {int tag; scalar_t__ failed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(struct shared_info *VAR_0, const char *VAR_1)
{

 VAR_0->failed = 0;
 FUNC_1(VAR_0->tag, VAR_1, sizeof(VAR_0->tag));
 FUNC_0(0);
}
