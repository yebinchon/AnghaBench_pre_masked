
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uio {int dummy; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *,int ,int) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int *) ;
 struct mbuf* FUNC_3 (struct uio*,int ,int,int ,int) ;

__attribute__((used)) static struct mbuf *
FUNC_4(struct uio *VAR_5,
    int VAR_6,
    int VAR_7,
    int *VAR_8,
    uint32_t *VAR_9,
    struct mbuf **VAR_10)
{
 struct mbuf *VAR_11;

 VAR_11 = FUNC_3(VAR_5, VAR_3, VAR_6, 0,
     (VAR_2 | (VAR_7 ? VAR_1 : 0)));
 if (VAR_11 == ((void*)0)) {
  FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4, VAR_0);
  *VAR_8 = VAR_0;
 } else {
  *VAR_9 = FUNC_2(VAR_11, ((void*)0));
  *VAR_10 = FUNC_1(VAR_11);
 }
 return (VAR_11);
}
