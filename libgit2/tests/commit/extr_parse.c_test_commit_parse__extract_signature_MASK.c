
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {int klass; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int ,int *,char*) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (int *,int *,char const*,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int ) ;
 char const** VAR_6 ;
 int FUNC_11 (char const*) ;

void FUNC_12(void)
{
 git_odb *VAR_7;
 git_oid VAR_8;
 git_buf VAR_9 = VAR_0, VAR_10 = VAR_0;
 const char *VAR_11 = "-----BEGIN PGP SIGNATURE-----\nVersion: GnuPG v1.4.12 (Darwin)\n\niQIcBAABAgAGBQJQ+FMIAAoJEH+LfPdZDSs1e3EQAJMjhqjWF+WkGLHju7pTw2al\no6IoMAhv0Z/LHlWhzBd9e7JeCnanRt12bAU7yvYp9+Z+z+dbwqLwDoFp8LVuigl8\nJGLcnwiUW3rSvhjdCp9irdb4+bhKUnKUzSdsR2CK4/hC0N2i/HOvMYX+BRsvqweq\nAsAkA6dAWh+gAfedrBUkCTGhlNYoetjdakWqlGL1TiKAefEZrtA1TpPkGn92vbLq\nSphFRUY9hVn1ZBWrT3hEpvAIcZag3rTOiRVT1X1flj8B2vGCEr3RrcwOIZikpdaW\nwho/X3xh/DGbI2RbuxmmJpxxP/8dsVchRJJzBwG+yhwU/iN3MlV2c5D69tls/Dok\n6VbyU4lm/ae0y3yR83D9dUlkycOnmmlBAHKIZ9qUts9X7mWJf0+yy2QxJVpjaTGG\ncmnQKKPeNIhGJk2ENnnnzjEve7L7YJQF6itbx5VCOcsGh3Ocb3YR7DMdWjt7f8pu\nc6j+q1rP7EpE2afUN/geSlp5i3x8aXZPDj67jImbVCE/Q1X9voCtyzGJH7MXR0N9\nZpRF8yzveRfMH8bwAJjSOGAFF5XkcR/RNY95o+J+QcgBLdX48h+ZdNmUf6jqlu3J\n7KmTXXQcOVpN6dD3CmRFsbjq+x6RHwa8u1iGn+oIkX908r97ckfB/kHKH7ZdXIJc\ncpxtDQQMGYFpXK/71stq\n=ozeK\n-----END PGP SIGNATURE-----";
 const char *VAR_12 = "tree 6b79e22d69bf46e289df0345a14ca059dfc9bdf6\nparent 34734e478d6cf50c27c9d69026d93974d052c454\nauthor Ben Burkert <ben@benburkert.com> 1358451456 -0800\ncommitter Ben Burkert <ben@benburkert.com> 1358451456 -0800\n\na simple commit which works\n";






 const char *VAR_13 = "tree 51832e6397b30309c8bcad9c55fa6ae67778f378\nparent a1b6decaaac768b5e01e1b5dbf5b2cc081bed1eb\nauthor Some User <someuser@gmail.com> 1454537944 -0700\ncommitter Some User <someuser@gmail.com> 1454537944 -0700\ngpgsig bad\n\ncorrupt signature\n";







 const char *VAR_14 = "tree 51832e6397b30309c8bcad9c55fa6ae67778f378\nparent a1b6decaaac768b5e01e1b5dbf5b2cc081bed1eb\nauthor Some User <someuser@gmail.com> 1454537944 -0700\ncommitter Some User <someuser@gmail.com> 1454537944 -0700\n\ncorrupt signature\n";







 FUNC_3(FUNC_10(&VAR_7, VAR_5));
 FUNC_3(FUNC_8(&VAR_8, VAR_7, VAR_6[4], FUNC_11(VAR_6[4]), VAR_4));

 FUNC_3(FUNC_6(&VAR_9, &VAR_10, VAR_5, &VAR_8, ((void*)0)));
 FUNC_1(VAR_11, VAR_9.ptr);
 FUNC_1(VAR_12, VAR_10.ptr);

 FUNC_4(&VAR_9);
 FUNC_4(&VAR_10);

 FUNC_3(FUNC_6(&VAR_9, &VAR_10, VAR_5, &VAR_8, "gpgsig"));
 FUNC_1(VAR_11, VAR_9.ptr);
 FUNC_1(VAR_12, VAR_10.ptr);


 FUNC_3(FUNC_9(&VAR_8, "45dd856fdd4d89b884c340ba0e047752d9b085d6"));
 FUNC_2(VAR_1, FUNC_6(&VAR_9, &VAR_10, VAR_5, &VAR_8, ((void*)0)));
 FUNC_0(VAR_2, FUNC_7()->klass);


 FUNC_3(FUNC_8(&VAR_8, VAR_7, VAR_6[1], FUNC_11(VAR_6[1]), VAR_4));
 FUNC_2(VAR_1, FUNC_6(&VAR_9, &VAR_10, VAR_5, &VAR_8, ((void*)0)));
 FUNC_0(VAR_3, FUNC_7()->klass);


 FUNC_4(&VAR_9);
 FUNC_4(&VAR_10);
 FUNC_3(FUNC_8(&VAR_8, VAR_7, VAR_13, FUNC_11(VAR_13), VAR_4));
 FUNC_3(FUNC_6(&VAR_9, &VAR_10, VAR_5, &VAR_8, ((void*)0)));
 FUNC_1("bad", VAR_9.ptr);
 FUNC_1(VAR_14, VAR_10.ptr);


 FUNC_5(&VAR_9);
 FUNC_5(&VAR_10);

}
