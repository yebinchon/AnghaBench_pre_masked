
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
typedef void* u64 ;
typedef void* u32 ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {int name; TYPE_3__ dev; } ;
struct TYPE_5__ {int flags; int name; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {void* cookie2; void* cookie1; } ;
struct papr_scm_priv {int block_size; int blocks; int is_volatile; TYPE_2__ res; scalar_t__ bound_addr; struct platform_device* pdev; void* metadata_size; TYPE_1__ nd_set; void* drc_index; struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (struct papr_scm_priv*) ;
 int FUNC_3 (struct papr_scm_priv*) ;
 int FUNC_4 (struct papr_scm_priv*) ;
 int FUNC_5 (struct papr_scm_priv*) ;
 struct papr_scm_priv* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device_node*,char*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,void**) ;
 scalar_t__ FUNC_10 (struct device_node*,char*,void**) ;
 int FUNC_11 (struct papr_scm_priv*) ;
 int FUNC_12 (struct platform_device*,struct papr_scm_priv*) ;
 int FUNC_13 (char const*,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 u32 VAR_9, VAR_10;
 u64 VAR_11, VAR_12;
 struct papr_scm_priv *VAR_13;
 const char *VAR_14;
 u64 VAR_15[2];
 int VAR_16;


 if (FUNC_9(VAR_8, "ibm,my-drc-index", &VAR_9)) {
  FUNC_1(&VAR_7->dev, "%pOF: missing drc-index!\n", VAR_8);
  return -VAR_0;
 }

 if (FUNC_10(VAR_8, "ibm,block-size", &VAR_12)) {
  FUNC_1(&VAR_7->dev, "%pOF: missing block-size!\n", VAR_8);
  return -VAR_0;
 }

 if (FUNC_10(VAR_8, "ibm,number-of-blocks", &VAR_11)) {
  FUNC_1(&VAR_7->dev, "%pOF: missing number-of-blocks!\n", VAR_8);
  return -VAR_0;
 }

 if (FUNC_8(VAR_8, "ibm,unit-guid", &VAR_14)) {
  FUNC_1(&VAR_7->dev, "%pOF: missing unit-guid!\n", VAR_8);
  return -VAR_0;
 }


 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;


 FUNC_9(VAR_8, "ibm,metadata-size", &VAR_10);

 VAR_13->dn = VAR_8;
 VAR_13->drc_index = VAR_9;
 VAR_13->block_size = VAR_12;
 VAR_13->blocks = VAR_11;
 VAR_13->is_volatile = !FUNC_7(VAR_8, "ibm,cache-flush-required");


 FUNC_13(VAR_14, (uuid_t *) VAR_15);







 VAR_13->nd_set.cookie1 = FUNC_0(VAR_15[0]);
 VAR_13->nd_set.cookie2 = FUNC_0(VAR_15[1]);


 VAR_13->metadata_size = VAR_10;
 VAR_13->pdev = VAR_7;


 VAR_16 = FUNC_2(VAR_13);


 if (VAR_16 == VAR_4)
  VAR_16 = FUNC_3(VAR_13);

 if (VAR_16 != VAR_5) {
  FUNC_1(&VAR_13->pdev->dev, "bind err: %d\n", VAR_16);
  VAR_16 = -VAR_2;
  goto err;
 }


 VAR_13->res.start = VAR_13->bound_addr;
 VAR_13->res.end = VAR_13->bound_addr + VAR_13->blocks * VAR_13->block_size - 1;
 VAR_13->res.name = VAR_7->name;
 VAR_13->res.flags = VAR_6;

 VAR_16 = FUNC_11(VAR_13);
 if (VAR_16)
  goto err2;

 FUNC_12(VAR_7, VAR_13);

 return 0;

err2: FUNC_4(VAR_13);
err: FUNC_5(VAR_13);
 return VAR_16;
}
