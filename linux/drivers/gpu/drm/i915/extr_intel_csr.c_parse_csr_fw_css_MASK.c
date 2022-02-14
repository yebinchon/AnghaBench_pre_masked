
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_css_header {int header_len; scalar_t__ version; } ;
struct intel_csr {scalar_t__ required_version; scalar_t__ version; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_csr *VAR_0,
       struct intel_css_header *VAR_1,
       size_t VAR_2)
{
 if (VAR_2 < sizeof(struct intel_css_header)) {
  FUNC_2("Truncated DMC firmware, refusing.\n");
  return 0;
 }

 if (sizeof(struct intel_css_header) !=
     (VAR_1->header_len * 4)) {
  FUNC_2("DMC firmware has wrong CSS header length "
     "(%u bytes)\n",
     (VAR_1->header_len * 4));
  return 0;
 }

 if (VAR_0->required_version &&
     VAR_1->version != VAR_0->required_version) {
  FUNC_3("Refusing to load DMC firmware v%u.%u,"
    " please use v%u.%u\n",
    FUNC_0(VAR_1->version),
    FUNC_1(VAR_1->version),
    FUNC_0(VAR_0->required_version),
    FUNC_1(VAR_0->required_version));
  return 0;
 }

 VAR_0->version = VAR_1->version;

 return sizeof(struct intel_css_header);
}
