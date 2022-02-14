
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobspec_hdr {int dummy; } ;
typedef int process_jqe ;


 int VAR_0 ;
 int FUNC_0 (struct jobspec_hdr*) ;
 int FUNC_1 (struct jobspec_hdr*) ;
 int VAR_1 ;
 int FUNC_2 (char*,struct jobspec_hdr*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,struct jobspec_hdr*,int ,void*) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, char *VAR_4[], process_jqe VAR_5, void *VAR_6)
{
 struct jobspec_hdr VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_0(&VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_10 = FUNC_2(VAR_4[VAR_8], &VAR_7);
  if (VAR_10 == 0) {
   FUNC_3("\tinvalid job specifier: %s\n", VAR_4[VAR_8]);
   continue;
  }
 }
 VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_0, &VAR_7,
     VAR_5, VAR_6);

 FUNC_1(&VAR_7);
 return (VAR_9);
}
