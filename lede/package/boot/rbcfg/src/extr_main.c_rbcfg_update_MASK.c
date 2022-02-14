
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rbcfg_ctx {int buflen; char* tmp_file; char* mtd_device; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 struct rbcfg_ctx* VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_6)
{
 struct rbcfg_ctx *VAR_7 = VAR_4;
 char *VAR_8;
 uint32_t VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_5(VAR_7->buf, VAR_3);
 FUNC_5(VAR_7->buf + 4, 0);
 VAR_9 = FUNC_1((unsigned char *) VAR_7->buf, VAR_7->buflen);
 FUNC_5(VAR_7->buf + 4, VAR_9);

 VAR_8 = (VAR_6) ? VAR_7->tmp_file : VAR_7->mtd_device;
 VAR_10 = FUNC_4(VAR_8, VAR_1 | VAR_0);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5, "unable to open %s for writing\n", VAR_8);
  VAR_11 = VAR_2;
  goto out;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_7->buf, VAR_7->buflen);
 if (VAR_11 != VAR_7->buflen) {
  VAR_11 = VAR_2;
  goto out_close;
 }

 FUNC_3(VAR_10);
 VAR_11 = 0;

 out_close:
 FUNC_0(VAR_10);
 out:
 return VAR_11;
}
