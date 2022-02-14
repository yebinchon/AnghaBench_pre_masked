
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocf_session {int lock; } ;
struct ktls_session {struct ocf_session* cipher; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocf_session*,int) ;
 int FUNC_1 (struct ocf_session*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ktls_session *VAR_1)
{
 struct ocf_session *VAR_2;

 VAR_2 = VAR_1->cipher;
 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_2, sizeof(*VAR_2));
 FUNC_1(VAR_2, VAR_0);
}
