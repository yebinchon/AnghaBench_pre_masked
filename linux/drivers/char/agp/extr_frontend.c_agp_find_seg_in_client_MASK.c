
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_segment_priv {unsigned long pg_start; size_t pg_count; int prot; } ;
struct agp_client {int num_segments; struct agp_segment_priv** segments; } ;
typedef int pgprot_t ;
typedef unsigned long off_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct
agp_segment_priv *FUNC_1(const struct agp_client *VAR_0,
      unsigned long VAR_1,
         int VAR_2, pgprot_t VAR_3)
{
 struct agp_segment_priv *VAR_4;
 int VAR_5, VAR_6;
 off_t VAR_7;
 size_t VAR_8;

 VAR_7 = VAR_1 / 4096;
 VAR_8 = VAR_2 / 4096;
 VAR_4 = *(VAR_0->segments);
 VAR_5 = VAR_0->num_segments;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_segments; VAR_6++) {
  if ((VAR_4[VAR_6].pg_start == VAR_7) &&
      (VAR_4[VAR_6].pg_count == VAR_8) &&
      (FUNC_0(VAR_4[VAR_6].prot) == FUNC_0(VAR_3))) {
   return VAR_4 + VAR_6;
  }
 }

 return ((void*)0);
}
