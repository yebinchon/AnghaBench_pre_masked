
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {scalar_t__ fingerprints; scalar_t__ num_lines; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct blame_origin *VAR_0)
{
 if (VAR_0->fingerprints) {
  FUNC_1(VAR_0->fingerprints, VAR_0->num_lines);
  VAR_0->num_lines = 0;
  FUNC_0(VAR_0->fingerprints);
 }
}
