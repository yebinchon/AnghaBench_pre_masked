
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct island_bitmap {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct island_bitmap*,struct island_bitmap const*,size_t) ;
 struct island_bitmap* FUNC_1 (int,size_t) ;

__attribute__((used)) static struct island_bitmap *FUNC_2(const struct island_bitmap *VAR_1)
{
 size_t VAR_2 = sizeof(struct island_bitmap) + (VAR_0 * 4);
 struct island_bitmap *VAR_3 = FUNC_1(1, VAR_2);

 if (VAR_1)
  FUNC_0(VAR_3, VAR_1, VAR_2);

 VAR_3->refcount = 1;
 return VAR_3;
}
