
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile {int dummy; } ;
struct ewah_bitmap {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct ewah_bitmap*,int ,struct hashfile*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct hashfile *VAR_1, struct ewah_bitmap *VAR_2)
{
 if (FUNC_1(VAR_2, VAR_0, VAR_1) < 0)
  FUNC_0("Failed to write bitmap index");
}
