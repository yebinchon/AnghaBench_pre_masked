
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct xfile {size_t xf_type; int xf_flag; int xf_count; int xf_msgcount; scalar_t__ xf_offset; scalar_t__ xf_data; scalar_t__ xf_file; } ;
typedef int dtypes ;
struct TYPE_2__ {int n_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (struct xfile*) ;
 int FUNC_3 (struct xfile**,size_t*) ;
 int * VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int*,size_t*,int ,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct xfile *VAR_11, *VAR_12;
 char VAR_13[16], *VAR_14;
 int VAR_15, VAR_16;
 size_t VAR_17;
 static char const * const VAR_18[] = { "???", "inode", "socket",
     "pipe", "fifo", "kqueue", "crypto" };
 int VAR_19;
 int VAR_20;

 if (VAR_8 != ((void*)0)) {
  if (FUNC_5(VAR_8, VAR_9[VAR_4].n_value,
   &VAR_15, sizeof VAR_15) != sizeof VAR_15 ||
      FUNC_5(VAR_8, VAR_9[VAR_5].n_value,
   &VAR_16, sizeof VAR_16) != sizeof VAR_16)
   FUNC_1(1, "kvm_read(): %s", FUNC_4(VAR_8));
 } else {
  VAR_17 = sizeof(int);
  if (FUNC_7("kern.maxfiles", &VAR_15, &VAR_17, 0, 0) == -1 ||
      FUNC_7("kern.openfiles", &VAR_16, &VAR_17, 0, 0) == -1)
   FUNC_0(1, "sysctlbyname()");
 }

 if (VAR_10) {
  (void)FUNC_6("%3d/%3d files\n", VAR_16, VAR_15);
  return;
 }
 if (FUNC_3(&VAR_12, &VAR_17) == -1)
  return;
 VAR_16 = VAR_17 / sizeof *VAR_11;

 (void)FUNC_6("%d/%d open files\n", VAR_16, VAR_15);
 FUNC_6(sizeof(uintptr_t) == 4 ? VAR_6 : VAR_7);
 VAR_20 = (int)sizeof(uintptr_t) * 2;
 for (VAR_11 = (struct xfile *)VAR_12, VAR_19 = 0; VAR_19 < VAR_16; ++VAR_11, ++VAR_19) {
  if ((size_t)VAR_11->xf_type >= sizeof(VAR_18) / sizeof(VAR_18[0]))
   continue;
  (void)FUNC_6("%*jx", VAR_20, (uintmax_t)(uintptr_t)VAR_11->xf_file);
  (void)FUNC_6(" %-6.6s", VAR_18[VAR_11->xf_type]);
  VAR_14 = VAR_13;
  if (VAR_11->xf_flag & VAR_2)
   *VAR_14++ = 'R';
  if (VAR_11->xf_flag & VAR_3)
   *VAR_14++ = 'W';
  if (VAR_11->xf_flag & VAR_0)
   *VAR_14++ = 'A';
  if (VAR_11->xf_flag & VAR_1)
   *VAR_14++ = 'I';
  *VAR_14 = '\0';
  (void)FUNC_6(" %4s %3d", VAR_13, VAR_11->xf_count);
  (void)FUNC_6(" %3d", VAR_11->xf_msgcount);
  (void)FUNC_6(" %*jx", VAR_20, (uintmax_t)(uintptr_t)VAR_11->xf_data);
  (void)FUNC_6(" %*jx\n", (int)sizeof(VAR_11->xf_offset) * 2,
      (uintmax_t)VAR_11->xf_offset);
 }
 FUNC_2(VAR_12);
}
