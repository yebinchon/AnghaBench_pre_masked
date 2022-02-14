
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {unsigned int read_promote_level; unsigned int write_promote_level; int hotspot_stats; int cache_alloc; } ;


 unsigned int VAR_0 ;



 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct smq_policy*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct smq_policy *VAR_1)
{




 unsigned VAR_2 = FUNC_0(&VAR_1->cache_alloc) ?
  FUNC_1(VAR_1) : (VAR_0 / 2u);

 VAR_2 = FUNC_2(VAR_2, VAR_0);






 switch (FUNC_3(&VAR_1->hotspot_stats)) {
 case 129:
  VAR_2 /= 4u;
  break;

 case 130:
  VAR_2 /= 2u;
  break;

 case 128:
  break;
 }

 VAR_1->read_promote_level = VAR_0 - VAR_2;
 VAR_1->write_promote_level = (VAR_0 - VAR_2);
}
