
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;
struct dmar_map_entry {int start; int end; int flags; } ;
struct dmar_domain {int end; int rb_root; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 struct dmar_map_entry* FUNC_2 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_3 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_4 (int ,int *,struct dmar_map_entry*) ;
 int VAR_5 ;
 int FUNC_5 (struct dmar_domain*,struct dmar_map_entry*) ;
 int FUNC_6 (struct dmar_domain*,struct dmar_map_entry*) ;

__attribute__((used)) static int
FUNC_7(struct dmar_domain *VAR_6, struct dmar_map_entry *VAR_7,
    u_int VAR_8)
{
 struct dmar_map_entry *VAR_9, *VAR_10;
 bool VAR_11;

 FUNC_0(VAR_6);

 if ((VAR_7->start & VAR_2) != 0 ||
     (VAR_7->end & VAR_2) != 0)
  return (VAR_4);
 if (VAR_7->start >= VAR_7->end)
  return (VAR_4);
 if (VAR_7->end >= VAR_6->end)
  return (VAR_4);

 VAR_9 = FUNC_3(VAR_5, &VAR_6->rb_root, VAR_7);
 FUNC_1(VAR_9 != ((void*)0), ("next must be non-null %p %jx", VAR_6,
     (uintmax_t)VAR_7->start));
 VAR_10 = FUNC_4(VAR_5, &VAR_6->rb_root, VAR_9);
 if (VAR_10 != ((void*)0) && VAR_10->end > VAR_7->start &&
     (VAR_10->flags & VAR_0) == 0) {
  if ((VAR_10->flags & VAR_1) == 0)
   return (VAR_3);
  VAR_7->start = VAR_10->end;
 }
 if (VAR_9->start < VAR_7->end &&
     (VAR_9->flags & VAR_0) == 0) {
  if ((VAR_9->flags & VAR_1) == 0)
   return (VAR_3);
  VAR_7->end = VAR_9->start;
 }
 if (VAR_7->end == VAR_7->start)
  return (0);

 if (VAR_10 != ((void*)0) && VAR_10->end > VAR_7->start) {

  FUNC_6(VAR_6, VAR_10);
  VAR_10 = ((void*)0);
 }
 if (VAR_9->start < VAR_7->end) {
  FUNC_6(VAR_6, VAR_9);
  VAR_9 = ((void*)0);
 }

 VAR_11 = FUNC_5(VAR_6, VAR_7);
 FUNC_1(VAR_11, ("found RMRR dup %p start %jx end %jx",
     VAR_6, (uintmax_t)VAR_7->start, (uintmax_t)VAR_7->end));
 VAR_7->flags = VAR_1;
 return (0);
}
