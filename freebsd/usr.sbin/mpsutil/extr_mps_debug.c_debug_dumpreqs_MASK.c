
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysctlbuf ;
struct mps_dumpreq_hdr {int numframes; int smid; int state; int deschi; int desclo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (size_t) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int,int,...) ;
 int FUNC_4 (char*,int,char*,char*,int) ;
 int FUNC_5 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_5, char **VAR_6)
{
 struct mps_dumpreq_hdr *VAR_7;
 char *VAR_8, VAR_9[128];
 size_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_10 = 0;
 VAR_8 = ((void*)0);
 FUNC_4(VAR_9, sizeof(VAR_9), "dev.%s.%d.dump_reqs",
     VAR_3 ? "mps" : "mpr", VAR_4);

 VAR_12 = FUNC_5(VAR_9, ((void*)0), &VAR_10, ((void*)0), 0);
 if (VAR_12)
  return (VAR_12);

 if (VAR_10 == 0)
  return (0);

 VAR_8 = FUNC_1(VAR_10);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_12 = FUNC_5(VAR_9, VAR_8, &VAR_10, ((void*)0), 0);
 if (VAR_12) {
  FUNC_3("len= %zd, error= %d errno= %d\n", VAR_10, VAR_12, VAR_2);
  return (VAR_12);
 }

 while (VAR_10 >= VAR_1) {
  VAR_7 = (struct mps_dumpreq_hdr *)VAR_8;
  VAR_11 = VAR_7->numframes;

  FUNC_3("SMID= %d state= %#x numframes= %d desc.hi= %#08x "
      "desc.lo= %#08x\n", VAR_7->smid, VAR_7->state,
      VAR_7->numframes, VAR_7->deschi, VAR_7->desclo);

  VAR_8 += sizeof(struct mps_dumpreq_hdr);
  VAR_10 -= sizeof(struct mps_dumpreq_hdr);

  if ((VAR_13 = FUNC_0(VAR_8)) != -1)
   FUNC_2(VAR_8, VAR_13, VAR_11);

  VAR_8 += VAR_1 * VAR_11;
  VAR_10 -= VAR_1 * VAR_11;
 }

 return (VAR_12);
}
