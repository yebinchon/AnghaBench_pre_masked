
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session2_op {int mac; size_t mackeylen; int crid; int ses; void const* mackey; } ;
typedef int sop ;


 int FUNC_0 (int,char*,int,size_t,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ,struct session2_op*) ;
 int FUNC_2 (struct session2_op*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, int VAR_3, int VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct session2_op VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.mac = VAR_3;
 VAR_7.mackey = VAR_5;
 VAR_7.mackeylen = VAR_6;
 VAR_7.crid = VAR_4;

 FUNC_0(FUNC_1(VAR_2, VAR_0, &VAR_7) >= 0,
     "alg %d keylen %zu, errno=%d (%s)", VAR_3, VAR_6, VAR_1,
     FUNC_3(VAR_1));
 return (VAR_7.ses);
}
