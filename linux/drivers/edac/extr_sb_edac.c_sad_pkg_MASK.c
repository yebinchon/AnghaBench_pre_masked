
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct interleave_pkg {int end; int start; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(const struct interleave_pkg *VAR_0, u32 VAR_1,
     int VAR_2)
{
 return FUNC_0(VAR_1, VAR_0[VAR_2].start,
       VAR_0[VAR_2].end);
}
