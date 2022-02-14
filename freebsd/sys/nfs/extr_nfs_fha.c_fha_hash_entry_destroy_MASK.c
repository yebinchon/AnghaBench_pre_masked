
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fha_hash_entry {scalar_t__ num_rw; scalar_t__ num_exclusive; scalar_t__ num_threads; int mtx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fha_hash_entry*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct fha_hash_entry *VAR_2)
{

 FUNC_2(VAR_2->mtx, VAR_0);
 FUNC_0(VAR_2->num_rw == 0,
     ("%d reqs on destroyed fhe %p", VAR_2->num_rw, VAR_2));
 FUNC_0(VAR_2->num_exclusive == 0,
     ("%d exclusive reqs on destroyed fhe %p", VAR_2->num_exclusive, VAR_2));
 FUNC_0(VAR_2->num_threads == 0,
     ("%d threads on destroyed fhe %p", VAR_2->num_threads, VAR_2));
 FUNC_1(VAR_2, VAR_1);
}
