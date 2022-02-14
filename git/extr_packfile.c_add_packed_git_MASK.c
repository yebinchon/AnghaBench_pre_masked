
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mtime; int st_size; int st_mode; } ;
struct packed_git {int pack_keep; int pack_promisor; int pack_local; int hash; int mtime; int pack_size; scalar_t__ pack_name; } ;
struct TYPE_2__ {size_t hexsz; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct packed_git* FUNC_2 (size_t) ;
 int FUNC_3 (struct packed_git*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,char const*,size_t) ;
 size_t FUNC_7 (size_t,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,struct stat*) ;
 int FUNC_9 (char const*,size_t*,char*) ;
 int FUNC_10 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_11 (scalar_t__,size_t,char*) ;

struct packed_git *FUNC_12(const char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct stat VAR_5;
 size_t VAR_6;
 struct packed_git *VAR_7;





 if (!FUNC_9(VAR_2, &VAR_3, ".idx"))
  return ((void*)0);





 VAR_6 = FUNC_7(VAR_3, FUNC_10(".promisor"), 1);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_6(VAR_7->pack_name, VAR_2, VAR_3);

 FUNC_11(VAR_7->pack_name + VAR_3, VAR_6 - VAR_3, ".keep");
 if (!FUNC_1(VAR_7->pack_name, VAR_0))
  VAR_7->pack_keep = 1;

 FUNC_11(VAR_7->pack_name + VAR_3, VAR_6 - VAR_3, ".promisor");
 if (!FUNC_1(VAR_7->pack_name, VAR_0))
  VAR_7->pack_promisor = 1;

 FUNC_11(VAR_7->pack_name + VAR_3, VAR_6 - VAR_3, ".pack");
 if (FUNC_8(VAR_7->pack_name, &VAR_5) || !FUNC_0(VAR_5.st_mode)) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }




 VAR_7->pack_size = VAR_5.st_size;
 VAR_7->pack_local = VAR_4;
 VAR_7->mtime = VAR_5.st_mtime;
 if (VAR_3 < VAR_1->hexsz ||
     FUNC_4(VAR_2 + VAR_3 - VAR_1->hexsz, VAR_7->hash))
  FUNC_5(VAR_7->hash);
 return VAR_7;
}
