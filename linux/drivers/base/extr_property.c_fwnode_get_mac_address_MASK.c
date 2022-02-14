void *FUNC_0(struct fwnode_handle *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0(VAR_0, "mac-address", VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, "local-mac-address", VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, "address", VAR_1, VAR_2);
}
