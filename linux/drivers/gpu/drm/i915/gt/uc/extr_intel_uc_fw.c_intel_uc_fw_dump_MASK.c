
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc_fw {int rsa_size; int ucode_size; int minor_ver_found; int major_ver_found; int minor_ver_wanted; int major_ver_wanted; int status; int path; int type; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct intel_uc_fw *VAR_0, struct drm_printer *VAR_1)
{
 FUNC_0(VAR_1, "%s firmware: %s\n",
     FUNC_2(VAR_0->type), VAR_0->path);
 FUNC_0(VAR_1, "\tstatus: %s\n",
     FUNC_1(VAR_0->status));
 FUNC_0(VAR_1, "\tversion: wanted %u.%u, found %u.%u\n",
     VAR_0->major_ver_wanted, VAR_0->minor_ver_wanted,
     VAR_0->major_ver_found, VAR_0->minor_ver_found);
 FUNC_0(VAR_1, "\tuCode: %u bytes\n", VAR_0->ucode_size);
 FUNC_0(VAR_1, "\tRSA: %u bytes\n", VAR_0->rsa_size);
}
