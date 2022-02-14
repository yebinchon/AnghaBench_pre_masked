
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct flowi6 {int flowi6_oif; int daddr; int saddr; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;


 int VAR_0 ;
 int VAR_1 ;
 struct dst_entry* FUNC_0 (int *,int *,struct flowi6*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct flowi6*,int ,int) ;

__attribute__((used)) static struct dst_entry *FUNC_3(struct sockaddr_in6 *VAR_2,
         struct sockaddr_in6 *VAR_3)
{
 struct dst_entry *VAR_4;
 struct flowi6 VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5 = VAR_3->sin6_addr;
 VAR_5 = VAR_2->sin6_addr;
 if (FUNC_1(&VAR_5) & VAR_0)
  VAR_5 = VAR_3->sin6_scope_id;

 VAR_4 = FUNC_0(&VAR_1, ((void*)0), &VAR_5);
 return VAR_4;
}
