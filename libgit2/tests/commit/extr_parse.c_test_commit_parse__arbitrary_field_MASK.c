
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_commit ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,char*) ;
 int FUNC_7 (int **,int ) ;
 int * VAR_2 ;

void FUNC_8(void)
{
 git_commit *VAR_3;
 git_buf VAR_4 = VAR_0;
 const char *VAR_5 = "-----BEGIN PGP SIGNATURE-----\nVersion: GnuPG v1.4.12 (Darwin)\n\niQIcBAABAgAGBQJQ+FMIAAoJEH+LfPdZDSs1e3EQAJMjhqjWF+WkGLHju7pTw2al\no6IoMAhv0Z/LHlWhzBd9e7JeCnanRt12bAU7yvYp9+Z+z+dbwqLwDoFp8LVuigl8\nJGLcnwiUW3rSvhjdCp9irdb4+bhKUnKUzSdsR2CK4/hC0N2i/HOvMYX+BRsvqweq\nAsAkA6dAWh+gAfedrBUkCTGhlNYoetjdakWqlGL1TiKAefEZrtA1TpPkGn92vbLq\nSphFRUY9hVn1ZBWrT3hEpvAIcZag3rTOiRVT1X1flj8B2vGCEr3RrcwOIZikpdaW\nwho/X3xh/DGbI2RbuxmmJpxxP/8dsVchRJJzBwG+yhwU/iN3MlV2c5D69tls/Dok\n6VbyU4lm/ae0y3yR83D9dUlkycOnmmlBAHKIZ9qUts9X7mWJf0+yy2QxJVpjaTGG\ncmnQKKPeNIhGJk2ENnnnzjEve7L7YJQF6itbx5VCOcsGh3Ocb3YR7DMdWjt7f8pu\nc6j+q1rP7EpE2afUN/geSlp5i3x8aXZPDj67jImbVCE/Q1X9voCtyzGJH7MXR0N9\nZpRF8yzveRfMH8bwAJjSOGAFF5XkcR/RNY95o+J+QcgBLdX48h+ZdNmUf6jqlu3J\n7KmTXXQcOVpN6dD3CmRFsbjq+x6RHwa8u1iGn+oIkX908r97ckfB/kHKH7ZdXIJc\ncpxtDQQMGYFpXK/71stq\n=ozeK\n-----END PGP SIGNATURE-----";
 FUNC_2(FUNC_7(&VAR_3, VAR_2[4]));

 FUNC_2(FUNC_6(&VAR_4, VAR_3, "tree"));
 FUNC_0("6b79e22d69bf46e289df0345a14ca059dfc9bdf6", VAR_4.ptr);
 FUNC_3(&VAR_4);

 FUNC_2(FUNC_6(&VAR_4, VAR_3, "parent"));
 FUNC_0("34734e478d6cf50c27c9d69026d93974d052c454", VAR_4.ptr);
 FUNC_3(&VAR_4);

 FUNC_2(FUNC_6(&VAR_4, VAR_3, "gpgsig"));
 FUNC_0(VAR_5, VAR_4.ptr);
 FUNC_3(&VAR_4);

 FUNC_1(VAR_1, FUNC_6(&VAR_4, VAR_3, "awesomeness"));
 FUNC_1(VAR_1, FUNC_6(&VAR_4, VAR_3, "par"));

 FUNC_5(VAR_3);
 FUNC_2(FUNC_7(&VAR_3, VAR_2[0]));

 FUNC_2(FUNC_6(&VAR_4, VAR_3, "committer"));
 FUNC_0("Vicent Marti <tanoku@gmail.com> 1273848544 +0200", VAR_4.ptr);

 FUNC_4(&VAR_4);
 FUNC_5(VAR_3);
}
