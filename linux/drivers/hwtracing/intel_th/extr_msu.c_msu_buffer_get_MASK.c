
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msu_buffer_entry {struct msu_buffer const* mbuf; int owner; } ;
struct msu_buffer {int dummy; } ;


 struct msu_buffer_entry* FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const struct msu_buffer *
FUNC_4(const char *VAR_1)
{
 struct msu_buffer_entry *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 && !FUNC_3(VAR_2->owner))
  VAR_2 = ((void*)0);
 FUNC_2(&VAR_0);

 return VAR_2 ? VAR_2->mbuf : ((void*)0);
}
