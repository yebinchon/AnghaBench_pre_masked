
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct stat {int dummy; } ;
struct repository {TYPE_1__* index; } ;
struct dir_struct {int flags; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_6__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (struct dir_struct*,TYPE_1__*,int ,struct cache_entry const*) ;
 scalar_t__ FUNC_1 (struct cache_entry const*) ;
 scalar_t__ FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct strbuf*,struct repository*,struct cache_entry const*) ;
 int FUNC_4 (struct dir_struct*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct cache_entry const*,struct stat*,int ) ;
 int FUNC_6 (int ,struct stat*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct repository*,struct dir_struct*,struct cache_entry const*,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_1__*,struct dir_struct*) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (TYPE_1__*,struct dir_struct*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (struct strbuf*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_11(struct repository *VAR_17, struct dir_struct *VAR_18)
{
 int VAR_19;
 struct strbuf VAR_20 = VAR_3;


 if (VAR_9 || VAR_7) {
  if (!VAR_9)
   VAR_18->flags |= VAR_1;
  FUNC_4(VAR_18, VAR_17->index, &VAR_4);
  if (VAR_9)
   FUNC_9(VAR_17->index, VAR_18);
  if (VAR_7)
   FUNC_8(VAR_17->index, VAR_18);
 }
 if (VAR_5 || VAR_10) {
  for (VAR_19 = 0; VAR_19 < VAR_17->index->cache_nr; VAR_19++) {
   const struct cache_entry *VAR_21 = VAR_17->index->cache[VAR_19];

   FUNC_3(&VAR_20, VAR_17, VAR_21);

   if ((VAR_18->flags & VAR_2) &&
       !FUNC_0(VAR_18, VAR_17->index, VAR_20.buf, VAR_21))
    continue;
   if (VAR_11 && !FUNC_2(VAR_21))
    continue;
   if (VAR_21->ce_flags & VAR_0)
    continue;
   FUNC_7(VAR_17, VAR_18, VAR_21, VAR_20.buf,
    FUNC_2(VAR_21) ? VAR_16 :
    (FUNC_1(VAR_21) ? VAR_15 :
     VAR_12));
  }
 }
 if (VAR_6 || VAR_8) {
  for (VAR_19 = 0; VAR_19 < VAR_17->index->cache_nr; VAR_19++) {
   const struct cache_entry *VAR_22 = VAR_17->index->cache[VAR_19];
   struct stat VAR_23;
   int VAR_24;

   FUNC_3(&VAR_20, VAR_17, VAR_22);

   if ((VAR_18->flags & VAR_2) &&
       !FUNC_0(VAR_18, VAR_17->index, VAR_20.buf, VAR_22))
    continue;
   if (VAR_22->ce_flags & VAR_0)
    continue;
   if (FUNC_1(VAR_22))
    continue;
   VAR_24 = FUNC_6(VAR_20.buf, &VAR_23);
   if (VAR_6 && VAR_24)
    FUNC_7(VAR_17, VAR_18, VAR_22, VAR_20.buf, VAR_14);
   if (VAR_8 && FUNC_5(VAR_17->index, VAR_22, &VAR_23, 0))
    FUNC_7(VAR_17, VAR_18, VAR_22, VAR_20.buf, VAR_13);
  }
 }

 FUNC_10(&VAR_20);
}
