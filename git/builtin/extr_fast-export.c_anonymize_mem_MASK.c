
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hashmap {int cmpfn; } ;
struct TYPE_3__ {int hash; } ;
struct anonymized_entry {size_t orig_len; void const* anon; size_t anon_len; TYPE_1__ hash; void const* orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct anonymized_entry* FUNC_1 (struct hashmap*,struct anonymized_entry*,int ,int *) ;
 int FUNC_2 (struct hashmap*,int ,int *,int ) ;
 int FUNC_3 (struct hashmap*,TYPE_1__*) ;
 int FUNC_4 (void const*,size_t) ;
 struct anonymized_entry* FUNC_5 (int) ;
 void const* FUNC_6 (void const*) ;

__attribute__((used)) static const void *FUNC_7(struct hashmap *VAR_2,
     void *(*VAR_3)(const void *, size_t *),
     const void *VAR_4, size_t *VAR_5)
{
 struct anonymized_entry VAR_6, *VAR_7;

 if (!VAR_2->cmpfn)
  FUNC_2(VAR_2, VAR_0, ((void*)0), 0);

 FUNC_0(&VAR_6.hash, FUNC_4(VAR_4, *VAR_5));
 VAR_6.orig = VAR_4;
 VAR_6.orig_len = *VAR_5;
 VAR_7 = FUNC_1(VAR_2, &VAR_6, VAR_1, ((void*)0));

 if (!VAR_7) {
  VAR_7 = FUNC_5(sizeof(*VAR_7));
  FUNC_0(&VAR_7->hash, VAR_6.hash.hash);
  VAR_7->orig = FUNC_6(VAR_4);
  VAR_7->orig_len = *VAR_5;
  VAR_7->anon = VAR_3(VAR_4, VAR_5);
  VAR_7->anon_len = *VAR_5;
  FUNC_3(VAR_2, &VAR_7->hash);
 }

 *VAR_5 = VAR_7->anon_len;
 return VAR_7->anon;
}
