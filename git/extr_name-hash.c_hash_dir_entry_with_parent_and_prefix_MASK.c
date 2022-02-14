
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ len; scalar_t__ buf; } ;
struct index_state {int dir_hash; } ;
struct TYPE_3__ {unsigned int hash; } ;
struct dir_entry {int nr; TYPE_1__ ent; struct dir_entry* parent; scalar_t__ namelen; } ;


 int FUNC_0 (struct dir_entry*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned int) ;
 struct dir_entry* FUNC_3 (struct index_state*,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_8 (unsigned int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int * FUNC_9 (scalar_t__,char) ;
 int FUNC_10 (int) ;

__attribute__((used)) static struct dir_entry *FUNC_11(
 struct index_state *VAR_1,
 struct dir_entry *VAR_2,
 struct strbuf *VAR_3)
{
 struct dir_entry *VAR_4;
 unsigned int VAR_5;
 int VAR_6;





 FUNC_1((VAR_2 != ((void*)0)) ^ (FUNC_9(VAR_3->buf, '/') == ((void*)0)));

 if (VAR_2)
  VAR_5 = FUNC_8(VAR_2->ent.hash,
   VAR_3->buf + VAR_2->namelen,
   VAR_3->len - VAR_2->namelen);
 else
  VAR_5 = FUNC_7(VAR_3->buf, VAR_3->len);

 VAR_6 = FUNC_2(&VAR_1->dir_hash, VAR_5);
 FUNC_6(VAR_6);

 VAR_4 = FUNC_3(VAR_1, VAR_3->buf, VAR_3->len, VAR_5);
 if (!VAR_4) {
  FUNC_0(VAR_4, VAR_0, VAR_3->buf, VAR_3->len);
  FUNC_5(&VAR_4->ent, VAR_5);
  VAR_4->namelen = VAR_3->len;
  VAR_4->parent = VAR_2;
  FUNC_4(&VAR_1->dir_hash, &VAR_4->ent);

  if (VAR_2) {
   FUNC_10(VAR_6);


   VAR_6 = FUNC_2(&VAR_1->dir_hash, VAR_2->ent.hash);
   FUNC_6(VAR_6);
   VAR_2->nr++;
  }
 }

 FUNC_10(VAR_6);

 return VAR_4;
}
