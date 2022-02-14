
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct faultstate {int lookup_still_valid; int entry; int map; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct faultstate *VAR_0)
{

 if (VAR_0->lookup_still_valid) {
  FUNC_0(VAR_0->map, VAR_0->entry);
  VAR_0->lookup_still_valid = 0;
 }
}
