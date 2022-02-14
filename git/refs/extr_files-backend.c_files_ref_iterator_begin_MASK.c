
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct ref_iterator {int ordered; } ;
struct files_ref_store {int packed_ref_store; } ;
struct files_ref_iterator {unsigned int flags; struct ref_iterator* iter0; struct ref_iterator base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ref_iterator*,int *,int ) ;
 struct ref_iterator* FUNC_1 (int ,char const*,int) ;
 struct files_ref_store* FUNC_2 (struct ref_store*,unsigned int,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct files_ref_store*) ;
 struct ref_iterator* FUNC_4 (struct ref_iterator*,struct ref_iterator*) ;
 struct ref_iterator* FUNC_5 (int ,char const*,int ,unsigned int) ;
 struct files_ref_iterator* FUNC_6 (int,int) ;

__attribute__((used)) static struct ref_iterator *FUNC_7(
  struct ref_store *VAR_4,
  const char *VAR_5, unsigned int VAR_6)
{
 struct files_ref_store *VAR_7;
 struct ref_iterator *VAR_8, *VAR_9, *VAR_10;
 struct files_ref_iterator *VAR_11;
 struct ref_iterator *VAR_12;
 unsigned int VAR_13 = VAR_2;

 if (!(VAR_6 & VAR_0))
  VAR_13 |= VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_13, "ref_iterator_begin");
 VAR_8 = FUNC_1(FUNC_3(VAR_7),
           VAR_5, 1);
 VAR_9 = FUNC_5(
   VAR_7->packed_ref_store, VAR_5, 0,
   VAR_0);

 VAR_10 = FUNC_4(VAR_8, VAR_9);

 VAR_11 = FUNC_6(1, sizeof(*VAR_11));
 VAR_12 = &VAR_11->base;
 FUNC_0(VAR_12, &VAR_3,
          VAR_10->ordered);
 VAR_11->iter0 = VAR_10;
 VAR_11->flags = VAR_6;

 return VAR_12;
}
