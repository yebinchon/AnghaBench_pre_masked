
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct fha_hash_entry {int threads; scalar_t__ num_threads; scalar_t__ num_exclusive; scalar_t__ num_rw; int fh; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fha_hash_entry* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static struct fha_hash_entry *
FUNC_2(u_int64_t VAR_2)
{
 struct fha_hash_entry *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0, VAR_1);
 VAR_3->fh = VAR_2;
 VAR_3->num_rw = 0;
 VAR_3->num_exclusive = 0;
 VAR_3->num_threads = 0;
 FUNC_0(&VAR_3->threads);

 return (VAR_3);
}
