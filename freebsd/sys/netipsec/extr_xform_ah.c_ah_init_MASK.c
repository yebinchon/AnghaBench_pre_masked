
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xformsw {int dummy; } ;
struct secasvar {int tdb_cryptoid; } ;
struct cryptoini {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct secasvar*,struct xformsw*,struct cryptoini*) ;
 int FUNC_1 (int *,struct cryptoini*,int ) ;

__attribute__((used)) static int
FUNC_2(struct secasvar *VAR_1, struct xformsw *VAR_2)
{
 struct cryptoini VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);
 return VAR_4 ? VAR_4 :
   FUNC_1(&VAR_1->tdb_cryptoid, &VAR_3, VAR_0);
}
