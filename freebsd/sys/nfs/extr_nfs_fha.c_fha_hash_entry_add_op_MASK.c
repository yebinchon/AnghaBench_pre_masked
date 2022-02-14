
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fha_hash_entry {int num_exclusive; int num_rw; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct fha_hash_entry *VAR_2, int VAR_3, int VAR_4)
{

 FUNC_0(VAR_2->mtx, VAR_1);
 if (VAR_0 == VAR_3)
  VAR_2->num_exclusive += VAR_4;
 else
  VAR_2->num_rw += VAR_4;
}
